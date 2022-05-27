import unittest
class BB:
    def __init__(self, B1):
        # B1 contains the position of 4 points of bounding box 1
        self.B1 = B1

    def IoU(self, B2):
        xA = max(self.B1[0], B2[0])
        xB = max(self.B1[1], B2[1])
        wA = min(self.B1[2], B2[2])
        hB = min(self.B1[3], B2[3])
        interSec = max(wA - xA, 0) * max(hB - xB, 0)
        A = (self.B1[2] - self.B1[0]) * (self.B1[3] - self.B1[1])
        B = (B2[2] - B2[0]) * (B2[3] - B2[1])
        IoU_V = interSec / float(A + B - interSec)
        return IoU_V


class learnTest(unittest.TestCase):
    #   function is call after every set
    def setUp(self):
        print("Setup calling ...")
        self.result = 0.14285714285714285

    def test1_Func(self):
        # arrange
        print("Test 1 calling ..... ")
        # the first and second bounding box
        BB1 = [1, 1, 3, 3]
        BB2 = [2, 2, 4, 4]
        # Act
        Myclass = BB(BB1)
        ValueIoU = Myclass.IoU(BB2)
        # Assert
        self.assertEqual(ValueIoU, self.result)


if __name__ == "__main__":
    unittest.main()
