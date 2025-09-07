
        #include <stdio.h>
        #include <stdint.h>

        int main(void) {
            uint8_t reg = 0x0F; // 0000 1111

            // Set bit 7
            reg |= (1u << 7);
            printf("set b7: 0x%02X
", reg);

            // Clear bit 3
            reg &= (uint8_t)~(1u << 3);
            printf("clr b3: 0x%02X
", reg);

            // Toggle bit 0
            reg ^= (1u << 0);
            printf("tgl b0: 0x%02X
", reg);

            // Test bit 6
            if (reg & (1u << 6)) printf("b6 is set
"); else printf("b6 is not set
");

            // Shifts
            uint8_t value = 0x12; // 0001 0010
            printf("value<<2: 0x%02X
", (uint8_t)(value << 2));
            printf("value>>1: 0x%02X
", (uint8_t)(value >> 1));
            return 0;
        }
