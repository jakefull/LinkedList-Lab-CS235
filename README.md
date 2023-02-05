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
* insertHead()
* insertTail()
* insertAfter()
* remove()
* clear()
* at()
* size()
* toString()

and the following private data member:

* `head` -- a pointer to the first node in your linked list

You will need to create this data member and keep it properly updated as you
build your class.

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
   arguments" field. The valid options are 1, 2, 3, 4, 5, 6, and all. In
   `tests.cpp`, there are six functions, one to test each part. They are called
   `part1`, `part2`, etc. You can jump to the appropriate function to see the
   code that the autograder will run on your linked list. The autograder is
   expecting the output of `tests.cpp` to exactly match `part1_key.txt` for part
   1, `part2_key.txt` for part 2, etc.

To switch between the two methods of testing listed above, you can use the
drop-down menu to the left of the green play button. You'll click on either
"scratch" or "tests", depending on which one you want to use.

# Implementing the lab

If you find yourself confused, you might find
[this video](https://youtu.be/zRdZaBSqjEM) helpful. Otherwise, you can work
through the tasks below to implement your linked list class:

## Part 1 (20 points) - Node class, constructor, `toString()`, and `insertHead()`

Let's start off by creating a constructor and implementing `insertHead` and
`toString` so that we can see what's going on in our linked list.

Before implementing any methods, you'll need to create a `Node` class that can
hold a value and point to the next node. After that, you'll need to add a
private data member to the `LinkedList` for your `head` pointer. Once you've
done that, you're ready to start implementing `LinkedList`'s methods.

The constructor should be pretty simple; all it really needs to do is set `head`
to `nullptr`.

After getting the constructor working, implement the `insertHead` method. This
method should:
1. Check that the given value is not already in the list. If it is, `insertHead`
   should return without adding anything to the list.
2. Create a new node that contains the given value.
3. Set the `next` pointer of that node to be the current `head` pointer.
4. Change the `head` pointer to point to the newly created node.

Lastly, implement `toString` so that you can see what your list looks like. The
`toString` method should create a string that contains each element of the list
separated by spaces. For instance, if your list contained the values 10, 5, 90,
-12, and 7, `toString` would return `"10 5 90 -12 7"`.

## Part 2 (10 points) - `size()`

The next step is to implement the `size` method. This method should walk through
your linked list, counting up the number of nodes.

## Part 3 (20 points) - `insertTail()` and `insertAfter()`

Next, implement the remaining insert methods: `insertTail` and `insertAfter`.

`insertTail` should insert the given value at the end of the list, making sure
(like `insertHead` does) that the given value is not already in the list.

`insertAfter` has two arguments: the value to insert and the value to insert
after. `insertAfter` should:
1. Make sure that the value to insert is not already in the list. If it is,
   nothing should happen.
2. Check if the value to insert after is in the list. If not, nothing should
   happen.
3. Make a new node that contains the value to insert.
4. Insert the new node immediately after the value to insert after.

Wow, there are lots of "value"s, "insert"s and "after"s!

## Part 4 (10 points) - `at()`

Next, implement the `at` method. It should return the value in the list at the
specified index, throwing an `std::out_of_range` if the index is too big.

## Part 5 (10 points) - `remove()`

Next, implement the `remove` method. This should look through the list for a
node with the specified value, and, if it finds one, remove it.

## Part 6 (10 points) - `clear()` and destructor

The last thing to do is write code to clear the list, whether it's done through
an explicit call to `clear` or the fact that the list is going away and being
destroyed (via the destructor). Remember that to be a good citizen of the
computer, a program should free all memory that it allocates. So, `clear` should
deallocate any nodes that had been allocated by your linked list.

First, implement the `clear` method. This should traverse your list, `delete`ing
all nodes. Make sure that after doing so, you set `head` to `nullptr` so that
your class doesn't try to access a `delete`d node.

Second, implement the destructor. Since all the destructor does is clear the
list, all you should have to do in your destructor is call `clear`.

# Submitting your code

Once you have run all your code and are confident that it works as intended,
submit your `LinkedList.h` file on Gradescope. The autograder will run the same
tests as are in `tests.cpp`, so your results on Gradescope should (ideally) not
be a surprise.
