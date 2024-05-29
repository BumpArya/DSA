
Characteristics of DEQueues:
    Don't follow FIFO principle.
    Allow insertion and deletion at both ends of the queue.
    ![[Double ended queue.png]]

Types of DEQueues:
    Restricted Input DEQueue: Allows deletion from both ends but restricts insertion at the front.
    Restricted Output DEQueue: Allows insertion at both ends but restricts deletion from the rear.

DEQueue ADT:
    Similar to Queue ADT with additional methods.
    Methods: enqueueF(), enqueueR(), dequeueF(), dequeueR().