# Object_detection
## We often use Intersection over Union as an evaluation metric to measure how accuracy our model perform on a particular dataset.


##In this project, I try to implement class of BB which contain Intersection over Union metric and then, demonstrate my ability to use the unittest
to check the result of the metric.

##To apply Intersection over Union to check an (random) Object Detector, we need two bounding boxes:

The first one is The ground-truth bounding box (i.e., the hand labeled bounding boxes from the testing set that specify where in the image our object is).
The another one is the predicted bounding box generated from our model.

##Unit Test plays a great role of software development since we cannot know what the quality of software is. Therefore, we need to use Unittest do make sure that our code does correctly. 
In this project, I write a class of Unittest to check a method of BB class, which is the result of Intersection over Union metric.

Reference:
        https://medium.com/swlh/unit-testing-best-practices-853064ad3551
        https://medium.com/analytics-vidhya/iou-intersection-over-union-705a39e7acef#:~:text=IOU(Intersection%20over%20Union)%20is,fits%20perfectly%20around%20an%20object.


