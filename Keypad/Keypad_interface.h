/*
 * Keypad_interface.h
 *
 * Created: 1/5/2022
 *  Author: Ghaith Zaza
 */ 

// FOR PROGRAMMER WHO WANTS TO USE MY LIBERARY
#ifndef KEYPAD_INTERFACE_H_
#define KEYPAD_INTERFACE_H_

#include <stdint.h>
void KEYPAD_init(void);
uint8_t KEYPAD_u8GetButton(void);

#endif /* KEYPAD_INTERFACE_H_ */
