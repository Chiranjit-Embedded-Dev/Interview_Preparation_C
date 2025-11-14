// String Manipulation (C Basics)

// #include <stdio.h>
// #include<string.h>
// int fun_str_rev()
// {
//     char str[12]={"Hello World"};
//     int len=strlen(str);
//    for (int i=len-1;i>=0;i--)
//    {
//     printf("%c",str[i]);
//    }
//    printf("\n");
// }

// int main()
// {
//     fun_str_rev();
//     return 0;
// }

//
// Question 2: Bitwise Operations (Embedded Logic)

// #include <stdio.h>

// int bit_check()
// {
//     int number=13;
//     int nth =2;
//  for (int i=7;i>=0;i--)
//  {
//     printf("%d",(number >> i ) & 1 );

//  }
//  printf("\n");
//   if (number & (1 << nth)) // this is importend
//     {
//         printf("nth bit is set\n");
//     }
//     else
//     {
//         printf("nth bit is not set\n");
//     }
// }

// int main()
// {
//     bit_check();
//     return 0;
// }

// Question 3: GPIO Toggle Simulation (Bitwise Practice)

// #include <stdio.h>

// int bit_check()
// {
//     int PORT = 0b00001111;
//     int nth = 6;
//     printf("Befoe toggle the bit is =\n");
//     for (int i = 7; i >= 0; i--)
//     {

//         printf("%d", (PORT >> i) & 1);
//     }

//     PORT=PORT ^ (1<<nth);
//     printf("\nAfter toggle the bit is =\n");
//     for (int i = 7; i >= 0; i--)
//     {

//         printf("%d", (PORT >> i) & 1);
//     }
// }
// int main()
// {
//     bit_check();
//     return 0;
// }

// Question 4 (LED blink simulation using delay and bit toggle)

// #include <stdio.h>
// #define HIGH 1
// #define LOW 0
// int turn_on = 0;
// int turn_off = 0;
// int PORT = 0x00;
// int nth = 2;
// int Button=0;
// int press_time_ms;

// int Delay(int i)
// {
//     for (int i = 0; i <= 100000000; i++)
//     {
//         i++;
//     }
// }
// int Turn_On()
// {
//     if (Button == HIGH && press_time_ms == 2000)
//     {

//         turn_on = 1;
//         turn_off = 0;
//     }
//     else
//     {
//          Delay(2000);
//         turn_on = 0;
//         turn_off = 1;
//     }
// }
// int ON()
// {
//     if (turn_on == HIGH)
//     {
//         PORT |= (1 << nth);

//     }
// }
// int OFF()
// {
//     if (turn_on == LOW)
//     {
//         PORT &= ~(1 << nth);

//     }
// }
// int Toggle()
// {
//     for (int i = 0; i <= 2; i++)
//     {
//         ON();
//         Delay(2000);
//         OFF();
//         Delay(2000);
//     }
// }

// int main()
// {
//     if (Button==HIGH)
// {
// press_time_ms++;
// }
//     Turn_On();
//     Toggle();
//     return 0;
// }

// #include <stdio.h>
// #define HIGH 1
// #define LOW  0

// int PORT = 0x00;
// int LED_PIN = 2;

// int LED_STATE = LOW;
// int Button_State = HIGH; // Active low (HIGH = released)
// int press_time = 0;
// int release_time = 0;

// // Simulated delay function
// void Delay(long ms)
// {
//     for (volatile long i = 0; i < ms * 100000; i++);
// }

// // Simulated LED control
// void LED_ON(void)
// {
//     PORT |= (1 << LED_PIN);
//     LED_STATE = HIGH;
//     printf("LED ON  : PORT = 0x%02X\n", PORT);
// }

// void LED_OFF(void)
// {
//     PORT &= ~(1 << LED_PIN);
//     LED_STATE = LOW;
//     printf("LED OFF : PORT = 0x%02X\n", PORT);
// }

// void LED_Toggle(void)
// {
//     PORT ^= (1 << LED_PIN);
//     LED_STATE = !LED_STATE;
//     printf("LED TOGGLE: PORT = 0x%02X\n", PORT);
// }

// // Simulate external interrupt for button press/release
// void Button_Interrupt(int edge, int current_time)
// {
//     // edge = 0 → falling (press)
//     // edge = 1 → rising (release)
//     if (edge == 0) // Falling edge: Button pressed
//     {
//         press_time = current_time;
//         printf("\nButton Pressed at %d ms\n", press_time);
//     }
//     else // Rising edge: Button released
//     {
//         release_time = current_time;
//         int duration = release_time - press_time;
//         printf("Button Released at %d ms (Duration = %d ms)\n", release_time, duration);

//         if (duration < 1000)
//         {
//             printf("→ Short Press Detected\n");
//             LED_Toggle();
//         }
//         else
//         {
//             printf("→ Long Press Detected\n");
//             LED_ON();
//             Delay(2000);
//             LED_OFF();
//         }
//     }
// }

// int main(void)
// {
//     // Simulate events
//     // (edge, time in ms)
//     Button_Interrupt(0, 100);   // press
//     Button_Interrupt(1, 400);   // release after 300ms (short press)

//     Button_Interrupt(0, 2000);  // press again
//     Button_Interrupt(1, 4500);  // release after 2500ms (long press)

//     return 0;
// }

// terview Question 6: Bit Manipulation – Set, Clear, Toggle, and Read Bit

// Question:
// Write four functions in C to:

// Set a particular bit in a number.

// Clear a particular bit in a number.

// Toggle a particular bit in a number.

// Read a particular bit in a number.

// #include <stdio.h>
// int num = 0b00001010;
// int set()
// {
//     int nth = 0;
//     printf("Before the bit is ");
//     for (int i = 7; i >= 0; i--)
//     {
//         printf("%d", (num >> i) & 1);
//     }
//     num = num | (1 << nth);
//     printf("\nAfter the bit is ");
//     for (int i = 7; i >= 0; i--)
//     {
//         printf("%d", (num >> i) & 1);
//     }
// }
// int clear()
// {
//     int nth = 3;
//     printf("\nBefore the bit is ");
//     for (int i = 7; i >= 0; i--)
//     {
//         printf("%d", (num >> i) & 1);
//     }
//     num = num & ~(1 << nth);
//     printf("\nAfter the bit is ");
//     for (int i = 7; i >= 0; i--)
//     {
//         printf("%d", (num >> i) & 1);
//     }
// }
// int toggle()
// {
//     int nth = 1;
//     printf("\nBefore the bit is ");
//     for (int i = 7; i >= 0; i--)
//     {
//         printf("%d", (num >> i) & 1);
//     }
//     num = num ^ (1 << nth);
//     printf("\nAfter the bit is ");
//     for (int i = 7; i >= 0; i--)
//     {
//         printf("%d", (num >> i) & 1);
//     }
// }

// int check()
// {
//     int nth = 2;
//       if (num & (1 << nth)) // this is importend
//     {
//         printf("\nnth bit is set");
//     }
//     else
//     {
//         printf("\nnth bit is not set");
//     }
// }
// int main()
// {

//     set();
//     clear();
//     toggle();
//     check();

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>   // for malloc, free

/**
 * Note: The returned array must be malloc'ed, and free'd by the caller.
 */
int* countBits(int n, int* returnSize) {
    *returnSize = n + 1;                        // count from 0 to n

    // Allocate memory safely
    int* result = (int*)malloc((*returnSize) * sizeof(int));
    if (result == NULL) {
        *returnSize = 0;
        return NULL;                            // return NULL if allocation fails
    }

    result[0] = 0;                              // base case
    for (int i = 1; i <= n; i++) {
        result[i] = result[i >> 1] + (i & 1);   // bits(i) = bits(i/2) + (i%2)
    }

    return result;
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int size;
    int* result = countBits(n, &size);

    if (result == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  // exit safely
    }

    printf("Count of set bits from 0 to %d:\n", n);
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", result[i]);
        if (i < size - 1)
            printf(", ");
    }
    printf("]\n");

    free(result);  // ✅ Free memory here (caller responsibility)
    return 0;
}
