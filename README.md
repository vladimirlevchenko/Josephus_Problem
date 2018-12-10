# project2_melinaem_volodyml

**General info**

URL link - https://github.uio.no/IN1910/project2_melinaem_volodyml.git

Name of the project's folder - project2_melinaem_volodyml

To compile, the following command was used:

~$ g++ -std=c++11 file_name.cpp

and to run:

~$ ./a.out

**Answers to exercise 3**

**ArrayList**

*Get element i by index*:

Cost function does not grow with the array size, as there is no need for looping every single element to get to the desired indexed element. Therefore the cost is constant, i.e. O(1).

*Insert at front*:

If we insert element to the beginning of the list (index 0), the rest of the values are being copied to the new array with new i+1 indexes. Thus the insertion would depend on a size of the array – O(n) with linear costs.

*Insert at back (aka append)*:

If there is a room for new integers to be appended (meaning size < capacity) then the only operations to be performed are the simple ones as assignings and indexings. In total it would be 5 operations not dependent on the size of an array – so the costs would be O(1). However, if there is a need for resize, roughly 6 operations should be performed before the loop and 8 inside a loop, but since loop goes n times, costs would be 6+8n = O(n). So in the worth scenario the costs would be O(n).  

*Insert into middle of list*:

The insertion in the middle of the list would require iteration of every element in the list. Before the desired insertion we would have to find a place for a new value upon a given index and afterwards we would reallocate indexes upward on the list. So in total it is shown to be dependent on a size of the list – O(n) indicating a linear dependency.

*Remove element from front:*

The way I wrote an algorithm, the costs should be similar as for the insertion due to the need
of crawling through the indexes and reallocation of them for the new list after the 0 index
element was removed. So the costs increase linearly as a size of the list increases – O(n).
However, if I implemented a removal through an index operator [], then the operations might not be
dependent on the lists size and costs would be in a constant progression – O(1).

*Remove element from back:*

Costs are the same as for the removal of element from front – O(n).

*Remove element from middle:*

Again, since there is a need to go through every single index, the costs would depend on a
lists size and the closer to the end of the list, the more expensive it gets – O(n).

*Print:*

To print elements, the walk through every single element in the list is performed, thus the
greater the list – the more pricy it becomes. O(n).

**LinkedList:**

*Get element i by index:*

We have a for loop to iterate over all elements until we get to
our wanted index. So the cost will depend on which index we want.
The bigger the index, the more it costs. O(i)=O(n).

*Insert at front:*

To insert at front we just move the head pointer. So the cost does not
depend on the size of the list. O(1).

*Insert at back(append):*

We have to start at head and iterate throughout the list. This will be a big cost if the list is big. O(n).

*Insert into middle of list:*

The cost will be bigger if the index we wish to insert the number at is big. Because we have to iterate through the list until we get to our index. O(n).

*Remove element from front:*

To remove at front we just have to move the head pointer to the next index. This will not depend on the size of the list. O(1).

*Remove element from back:*

We have to go through the list until we get to the end of the list.
So the cost will be big if the list is big. O(n).

*Remove element from middle:*

The cost will be big if the index we want to remove is big. O(i)=O(n).

*Print:*

We need to go through a while loop so we can print out all the values
inside the list. So if the list is big, this will be a big cost. O(n).

**Exercise 4g**
68 will be "the last man standing". So in this quiz the element will survive.
