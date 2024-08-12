void FUN1(void)
{
struct modify_ldt_ldt_s VAR1;
long long VAR2[3];
int VAR3, VAR4;
char VAR5;
struct {
uint32_t VAR6;
uint16_t VAR7;
} FUN2((VAR8)) VAR9;

VAR1.VAR10 = 1;
VAR1.VAR11 = (unsigned long)&VAR12;
VAR1.VAR13 = (sizeof(VAR12) + 0xfff) >> 12;
VAR1.VAR14 = 1;
VAR1.VAR15 = VAR16;
VAR1.VAR17 = 0;
VAR1.VAR18 = 1;
VAR1.VAR19 = 0;
VAR1.VAR20 = 1;
FUN3(1, &VAR1, sizeof(VAR1)); 

VAR1.VAR10 = 2;
VAR1.VAR11 = (unsigned long)&VAR21;
VAR1.VAR13 = (sizeof(VAR21) + 0xfff) >> 12;
VAR1.VAR14 = 1;
VAR1.VAR15 = VAR16;
VAR1.VAR17 = 0;
VAR1.VAR18 = 1;
VAR1.VAR19 = 0;
VAR1.VAR20 = 1;
FUN3(1, &VAR1, sizeof(VAR1)); 

FUN3(0, &VAR2, sizeof(VAR2)); 
{
int VAR22;
for(VAR22=0;VAR22<3;VAR22++)
FUN4("", VAR22, VAR2[VAR22]);
}

asm volatile ("" : : "" (FUN5(1)));

VAR12[1] = 0xaa;
VAR21[1] = 0x55;

asm volatile ("" : "" (VAR3));
FUN4("", VAR3);

asm volatile (""
""
""
""
: "" (VAR3)
: "" (FUN5(2)));
FUN4("", VAR3);


VAR5 = 0xa5;
asm volatile (""
""
""
""
""
""
""
""
: "" (VAR3), "" (VAR4)
: "" (FUN5(1)), "" (&VAR5));
FUN4("", VAR3);
FUN4("", VAR4);

VAR9.VAR7 = FUN5(2);
VAR9.VAR6 = 0xabcdef12;
asm volatile(""
""
: "" (VAR3), "" (VAR4)
: "" (VAR9));
FUN4("", VAR4, VAR3);

FUN6("", "", FUN5(2), 0x0100);
FUN6("", "", FUN5(2), 0x0100);
FUN6("", "", FUN5(2), 0);
FUN6("", "", FUN5(2), 0);

FUN6("", "", 0xfff8, 0);
FUN6("", "", 0xfff8, 0);
FUN6("", "", 0xfff8, 0);
FUN6("", "", 0xfff8, 0);

FUN7("", "", 0x12345678 | 3, 0x762123c | 1);
FUN7("", "", 0x12345678 | 1, 0x762123c | 3);
FUN7("", "", 0x12345678 | 1, 0x762123c | 1);
}