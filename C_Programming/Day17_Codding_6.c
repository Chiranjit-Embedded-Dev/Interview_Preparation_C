// Day16_Codding_5
// What is the difference between a pointer to a 
// constant and a constant pointer in C?

//pointer to a  constant - the the value of memory can be change but memory cant be 
//  constant pointer- value cant be change but memory location can be change
// Type	       Pointer address  	  Value through pointer
// const int *ptr	  ✅ changeable	       ❌ cannot change
// int * const ptr	  ❌ fixed	           ✅ can change

// What is the difference between 
// volatile and const keywords in C?

// volatile - the value of the variable not fixed can be change any monent of time
//const- the is fixed can't be change 

// Why do we use the volatile keyword when accessing
// hardware registers or memory-mapped I/O in embedded
// systems?
// Can you explain with a small example code snippet?

// #define SENSOR_STATUS  (*(volatile unsigned int*)0x40001000)

// int main(void) {
//     while ((SENSOR_STATUS & 0x01) == 0) {
//         // wait until sensor sets "data ready" flag
//     }

//     // Once flag set, read sensor data...
// }


// What is the difference between static and global 
// variables in C?

// scope -global -scope is enter code,static scope is
// beased on where we declar if local then within 
// function  if global then enter code

// lifetime- global- enter code excution ,
// static- end of functoin life for local and for global
// static it will be end of code excution


// Explain the different storage classes in C:
// auto, register, static, and extern.