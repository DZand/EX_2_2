/**



 * Examples of automatic tests for the exercise on binary trees.



 *



 * @author Erel Segal-Halevi



 * @since 2019-02



 */







#include <iostream>



using std::cout, std::endl;



#include "badkan.hpp"



#include "Tree.hpp"







int main() {



  ariel::Tree emptytree;



  ariel::Tree threetree; 

  

  ariel::Tree tentree;



  threetree.insert(5);



  threetree.insert(7);



  threetree.insert(3);

  

  tentree.insert(8);

  tentree.insert(12);

  tentree.insert(3);

  tentree.insert(4);

  tentree.insert(2);

  tentree.insert(7);

  tentree.insert(1);

  tentree.insert(9);

  tentree.insert(11);

  tentree.insert(5);

  tentree.insert(-3);



  



  ariel::Tree mytree;  







  badkan::TestCase tc("Binary tree");



  tc



  .CHECK_EQUAL (emptytree.size(), 0)



  .CHECK_OK    (emptytree.insert(5))



  .CHECK_THROWS(emptytree.insert(5))



  .CHECK_EQUAL (emptytree.size(), 1)



  .CHECK_EQUAL (emptytree.contains(5), true)



  .CHECK_OK    (emptytree.remove(5))



  .CHECK_EQUAL (emptytree.contains(5), false)



  .CHECK_THROWS(emptytree.remove(5))



  .CHECK_EQUAL (emptytree.size() ,0)



  



  .CHECK_EQUAL (threetree.size(), 3)



  .CHECK_EQUAL (threetree.root(), 5)



  .CHECK_EQUAL (threetree.parent(3), 5)



  .CHECK_EQUAL (threetree.parent(7), 5)



  .CHECK_EQUAL (threetree.left(5), 3)



  .CHECK_EQUAL (threetree.right(5), 7)



  .CHECK_THROWS(threetree.insert(3))



  .CHECK_THROWS(threetree.left(6))



  .CHECK_OK    (threetree.print())



  .CHECK_THROWS(threetree.right(4))

  

  .CHECK_THROWS(threetree.insert(3.5))

   

  .CHECK_OK     (threetree.insert(-5))

    

  .CHECK_OK    (threetree.remove(5))

    

  .CHECK_EQUAL (threetree.root(), 7)

    

  .CHECK_EQUAL (threetree.left(7), 3)

 

  .CHECK_THROWS(threetree.remove(2))

  

  .CHECK_OK    (tentree.remove(1))

    

  .CHECK_EQUAL (threetree.left(2), -3)  

   

   

   

    

    

   

    

   



  .print();



  



  cout << "You have " << tc.right() << " right answers and " << tc.wrong() << " wrong answers so your grade is " << tc.grade() << ". Great!" << endl;



}
