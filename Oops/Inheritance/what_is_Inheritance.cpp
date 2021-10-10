
/*

1. The concept of reusability in C++ is supported using inheritance
2. We can reuse th eproperties of an existing class by inherititing from it
3. The existing class is called as the base class
4. The new class which is inherited is called as the Derived class
5. Reusing classes saves time and money
6. There are different types of inheritance in C++


   ************* Types of Inheritance *****************
        1. Single inheritance
        2. multiple inheritance
        3. Hierarchical inheritance
        4. multilevel inheritance
        5. Hybrid inheritance



     1. ******* Single *********

        A derived class with only one base class

        class A(base) -----> Class B(derived)
     
    
    
    
    
     2. ******* Multiple *********

        A derived class with multiple base class

        class A(base) -----> Class B(derived)<-----class C(base)
     
     
     
     
     
     3. ******* Hierarchical *********

       more than one  derived class with one  base class

        class A(base) -----> Class B(derived)
          | 
          |
          |
          v
        class C(derived)  



     4. ******* Multilevel *********

        A derived class with multiple base class

        class A(animal) -----> Class B(mammal)+(more in mammal)----->class C(human)+(more characters in human )
     
     
     
     
     
     5. ******* hybrid inheritance *********

       hybrid inheritance is a combination of multiple inheritance and 
       multilevel inheritance.

       a class is derived from two classes as in multilevel inheritance

       however one of the parent classes is not a base class


     
     
*/