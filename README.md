# Introduction

In this lab, you will create a templated linked list class in C++. We will
provide you with a ready-to-go CLion project and test files, and your job will
be to write a class (called `LinkedList`) that inherits from the
`LinkedListInterface` class (which you can find in `LinkedListInterface.h`). The
project code has scaffolding for the class, which you can find in
`LinkedList.h`. Your may add private helper methods as needed to implement the
class, but if you stray from the methods outlined in `LinkedListInterface.h`,
you'll get all sorts of weird errors.

Your linked list class contains the following public methods:

* A constructor
* A destructor
* push_front()
* push_back()
* insert()
* pop_front()
* pop_back()
* remove()
* front()
* back()
* at()
* contains()
* size()
* clear()
* toString()

Since templated classes are almost always implemented completely in their header
file, all you need to make (and submit) is a `LinkedList.h` file.

# Testing your code

To test your code, you have two options:

1. Write your own test code in `scratch.cpp`
2. Run the tests contained in `tests.cpp`. These are the same tests that the
   autograder will run. To choose a part to test, you need to pass the part's
   number as a command-line argument. To do that, you'll need to open the
   drop-down menu to the left of the green play button, open the drop-down menu
   under "tests", click "Edit", and put the part number in the "Program
   arguments" field. The valid options are 1, 2, 3, 4, 5, 6, 7, and all. In
   `tests.cpp`, there are seven functions, one to test each part. They are
   called `part1`, `part2`, etc. You can jump to the appropriate function to see
   the code that the autograder will run on your linked list. The autograder is
   expecting the output of `tests.cpp` to exactly match `part1_key.txt` for part
   1, `part2_key.txt` for part 2, etc.

To switch between the two methods of testing listed above, you can use the
drop-down menu to the left of the green play button. You'll click on either
"scratch" or "tests", depending on which one you want to use.

# Implementing the lab

If you find yourself confused, you might find
[this video](https://youtu.be/zRdZaBSqjEM) helpful. Otherwise, you can work
through the tasks below to implement your linked list class:

## Part 1 (15 points) - Node class, constructor, `toString`, and `push_front`

Let's start off by creating a constructor and implementing `push_front` and
`toString` so that we can see what's going on in our linked list.

Before implementing any methods, you'll need to create a `Node` class that can
hold a value and point to the next node. After that, you'll need to add a
private data member to the `LinkedList` for your head pointer. Depending on how
you want to implement your list, you might also consider adding a tail pointer
and/or size counter as private data members. Once you've done that, you're ready
to start implementing `LinkedList`'s methods.

The constructor should be pretty simple; all it needs to do is initalize your
class to a blank state.

After getting the constructor working, implement the `push_front` method. This
method should:

1. Create a new node that contains the given value.
2. Set the "next" pointer of that node to be the current head pointer.
3. Change the head pointer to point to the newly created node.

Lastly, implement `toString` so that you can see what your list looks like. The
`toString` method should create a string that contains each element of the list
separated by spaces. For instance, if your list contained the values 10, 5, 90,
-12, and 7, `toString` would return `"10 5 90 -12 7"`.

## Part 2 (5 points) - `size`

The next step is to implement the `size` method. This method should return the
number of items in the list.

## Part 3 (15 points) - `push_back` and `insert`

Next, implement the remaining insert methods: `push_back` and `insert`.

`push_back` should insert the given value at the end of the list.

`insert` should insert the given value at the specified index if the index is in
range. If the specified index is not in range, it should throw an
`std::out_of_range`.

## Part 4 (10 points) - `at`, `front`, and `back`

Next, implement the accessor methods: `at`, `front`, and `back`.

The `at` method should return the value in the list at the specified index,
throwing an `std::out_of_range` if the index is too big.

The `front` method should return the first value in the list, throwing an
`std::length_error` if the list is empty.

The `back` method should return the last value in the list, throwing an
`std::length_error` if the list is empty.

## Part 5 (5 points) - `contains`

Next, implement the `contains` method. This should search the list for the given
value, returning `true` if the value is in the list and `false` otherwise.

## Part 6 (15 points) - `remove`, `pop_front`, and `pop_back`

You're almost there! The second-to-last step is to implement the remove methods:
`remove`, `pop_front`, and `pop_back`.

The `remove` method should remove the node at the specified index, throwing an
`std::out_of_range` if the index is too big.

The `pop_front` method should remove the first item in the list, throwing an
`std::length_error` if the list is empty.

The `pop_back` method should remove the last item in the list, throwing an
`std::length_error` if the list is empty.

## Part 7 (10 points) - `clear` and destructor

The last thing to do is write code to clear the list, whether that's needed due
to an explicit call to `clear` or the fact that the list is going away and being
destroyed (via the destructor). Remember that to be a good citizen of the
computer, a program should free all memory that it allocates. So, `clear` should
deallocate any nodes that had been allocated by your linked list.

First, implement the `clear` method. This should traverse your list, `delete`ing
all nodes. Make sure that after doing so, you set your head pointer to `nullptr`
so that your class doesn't try to access a `delete`d node (the same applies for
your tail pointer if you chose to include one).

Second, implement the destructor. Since all the destructor does is clear the
list, all you should have to do in your destructor is call `clear`.

# Submitting your code

Once you have run all your code and are confident that it works as intended,
submit your `LinkedList.h` file on Gradescope. The autograder will run the same
tests as are in `tests.cpp`, so your results on Gradescope should (ideally) not
be a surprise.
