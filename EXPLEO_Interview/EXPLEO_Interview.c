//1.Use a double pointer (int **) to find the 50th element of an array.
//2. write code for When the button is pressed and held for more than 2 seconds,
// the LED should turn on. If the button is released before 2 seconds, 
// the LED should remain off. If the button is pressed again while the LED is on,
// the LED should turn off immediately.
// #include <stdio.h>

// int main() {
//     int arr[100];
//     for (int i = 0; i < 100; i++)
//         arr[i] = i + 1;

//     int *ptr = arr;
//     int **dptr = &ptr;

//     // Access 50th element (index 49)
//     printf("50th element = %d\n", *(*dptr + 49));  // ✅ Correct
//     return 0;
// }


// #include <stdbool.h>
// #include <stdint.h>

// // Assume these are your hardware pins
// #define BUTTON_PIN  5
// #define LED_PIN     6

// bool read_button(void); // returns true if pressed
// void led_on(void);
// void led_off(void);
// void delay_ms(uint32_t ms);

// #include <stdbool.h>
// #include <stdint.h>

// // Define pins (adjust for your hardware)
// #define BUTTON_PIN   5
// #define LED_PIN      6

// // Function prototypes (to be implemented per your MCU)
// bool read_button(void);      
// void led_on(void);
// void led_off(void);
// void delay_ms(uint32_t ms);

// // Global flag to track LED state
// bool led_state = false;

// // Function to turn ON LED if button held > 2 sec
// void fun_turnon(void)
// {
//     uint32_t count = 0;

//     // Check if LED is OFF and button pressed
//     if (!led_state && read_button()) {
//         while (read_button()) {  // wait while pressed
//             delay_ms(1);
//             count++;
//             if (count >= 2000) { // 2 seconds
//                 led_on();
//                 led_state = true;
//                 break;
//             }
//         }
//     }
// }

// // Function to turn OFF LED if pressed again
// void fun_turnoff(void)
// {
//     // If LED is ON and button pressed → turn OFF immediately
//     if (led_state && read_button()) {
//         led_off();
//         led_state = false;

//         // Wait until button released to avoid bounce
//         while (read_button());
//         delay_ms(50);
//     }
// }

// int main(void)
// {
//     while (1)
//     {
//         fun_turnon();   // Check for long press to turn ON
//         fun_turnoff();  // Check for press to turn OFF
//     }
//     return 0;
// }
