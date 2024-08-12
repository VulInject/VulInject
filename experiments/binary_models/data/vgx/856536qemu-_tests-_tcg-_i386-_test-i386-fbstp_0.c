union VAR1 {
struct { uint64_t VAR2; uint16_t VAR3; } VAR4;
long double VAR5;
};

volatile union u VAR6 = { .VAR4 = { 1, 1234 } };
volatile union u VAR7 = { .VAR4 = { 0, 1234 } };
volatile union u VAR8 = { .VAR4 = { 0, 0x7fff } };
volatile union u VAR9 = { .VAR4 = { (FUN1(1) << 63) - 1, 0x7fff } };

int main(void)
{
int VAR10 = 0;
unsigned char VAR11[10];
memset(VAR11, 0xfe, sizeof VAR11);
__asm__ volatile ("" : "" (VAR11) : "" (-0.0L) : "");
VAR11[9] &= 0x80;
if (memcmp(VAR11, "", sizeof VAR11) != 0) {
FUN2("");
VAR10 = 1;
}
memset(VAR11, 0x12, sizeof VAR11);
__asm__ volatile ("" : "" (VAR11) : "" (-0.1L) : "");
VAR11[9] &= 0x80;
if (memcmp(VAR11, "", sizeof VAR11) != 0) {
FUN2("");
VAR10 = 1;
}
memset(VAR11, 0x1f, sizeof VAR11);
__asm__ volatile ("" : "" (VAR11) : "" (-987654321987654321.0L) :
"");
VAR11[9] &= 0x80;
if (memcmp(VAR11, "",
sizeof VAR11) != 0) {
FUN2("");
VAR10 = 1;
}
memset(VAR11, 0x12, sizeof VAR11);
__asm__ volatile ("" : "" (VAR11) : "" (999999999999999999.5L) :
"");
if (memcmp(VAR11, "", sizeof VAR11) != 0) {
FUN2("");
VAR10 = 1;
}
memset(VAR11, 0x12, sizeof VAR11);
__asm__ volatile ("" : "" (VAR11) : "" (1000000000000000000.0L) :
"");
if (memcmp(VAR11, "", sizeof VAR11) != 0) {
FUN2("");
VAR10 = 1;
}
memset(VAR11, 0x12, sizeof VAR11);
__asm__ volatile ("" : "" (VAR11) : "" (1e30L) : "");
if (memcmp(VAR11, "", sizeof VAR11) != 0) {
FUN2("");
VAR10 = 1;
}
memset(VAR11, 0x12, sizeof VAR11);
__asm__ volatile ("" : "" (VAR11) : "" (-999999999999999999.5L) :
"");
if (memcmp(VAR11, "", sizeof VAR11) != 0) {
FUN2("");
VAR10 = 1;
}
memset(VAR11, 0x12, sizeof VAR11);
__asm__ volatile ("" : "" (VAR11) : "" (-1000000000000000000.0L) :
"");
if (memcmp(VAR11, "", sizeof VAR11) != 0) {
FUN2("");
VAR10 = 1;
}
memset(VAR11, 0x12, sizeof VAR11);
__asm__ volatile ("" : "" (VAR11) : "" (-1e30L) : "");
if (memcmp(VAR11, "", sizeof VAR11) != 0) {
FUN2("");
VAR10 = 1;
}
memset(VAR11, 0x12, sizeof VAR11);
__asm__ volatile ("" : "" (VAR11) : "" (FUN3()) : "");
if (memcmp(VAR11, "", sizeof VAR11) != 0) {
FUN2("");
VAR10 = 1;
}
memset(VAR11, 0x12, sizeof VAR11);
__asm__ volatile ("" : "" (VAR11) : "" (-FUN3()) :
"");
if (memcmp(VAR11, "", sizeof VAR11) != 0) {
FUN2("");
VAR10 = 1;
}
memset(VAR11, 0x12, sizeof VAR11);
__asm__ volatile ("" : "" (VAR11) : "" (FUN4("")) :
"");
if (memcmp(VAR11, "", sizeof VAR11) != 0) {
FUN2("");
VAR10 = 1;
}
memset(VAR11, 0x12, sizeof VAR11);
__asm__ volatile ("" : "" (VAR11) : "" (-FUN4("")) :
"");
if (memcmp(VAR11, "", sizeof VAR11) != 0) {
FUN2("");
VAR10 = 1;
}
memset(VAR11, 0x12, sizeof VAR11);
__asm__ volatile ("" : "" (VAR11) : "" (VAR6.VAR5) :
"");
if (memcmp(VAR11, "", sizeof VAR11) != 0) {
FUN2("");
VAR10 = 1;
}
memset(VAR11, 0x12, sizeof VAR11);
__asm__ volatile ("" : "" (VAR11) : "" (VAR7.VAR5) :
"");
if (memcmp(VAR11, "", sizeof VAR11) != 0) {
FUN2("");
VAR10 = 1;
}
memset(VAR11, 0x12, sizeof VAR11);
__asm__ volatile ("" : "" (VAR11) : "" (VAR8.VAR5) :
"");
if (memcmp(VAR11, "", sizeof VAR11) != 0) {
FUN2("");
VAR10 = 1;
}
memset(VAR11, 0x12, sizeof VAR11);
__asm__ volatile ("" : "" (VAR11) : "" (VAR9.VAR5) :
"");
if (memcmp(VAR11, "", sizeof VAR11) != 0) {
FUN2("");
VAR10 = 1;
}
return VAR10;
}