#define SET_BIT(b,n) (b) |= 1 << (n)
#define CLEAR_BIT(b,n) (b) &= ~(1 << (n))
#define TOGGLE_BIT(b,n) (b) ^= 1 << (n)
#define GET_BIT(b,n) (b >> n) & 1

// Shift to right n times means nth bit goes to bit 1,
// then AND with 0000 0001 to get state of bit
// what is returned is either 0000 0000 (bit is cleared) or 0000 0001 (bit is set)