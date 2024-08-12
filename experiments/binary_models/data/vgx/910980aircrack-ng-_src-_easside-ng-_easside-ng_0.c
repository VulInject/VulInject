static void FUN1(struct VAR1 * VAR2, struct VAR3 * VAR4)
{
FUN2(VAR2 != NULL);

unsigned char VAR5[sizeof(struct VAR6) * 32];
struct VAR6 * VAR7 = (struct VAR6 *) VAR5;
unsigned short * VAR8;
int VAR9;
unsigned char * VAR10;

if (FUN3(VAR4, VAR2->VAR11, &VAR2->VAR12)) return;

memset(VAR5, 0, sizeof(VAR5));

VAR2->VAR13++;
FUN4(VAR2, VAR7);
VAR7->VAR14[0] |= VAR15 | VAR16;

VAR8 = (unsigned short *) (VAR7 + 1);


*VAR8++ = FUN5(VAR17 | VAR18);
*VAR8++ = FUN5(100); 


VAR10 = (unsigned char *) VAR8;
*VAR10++ = VAR19;
VAR9 = strlen(VAR2->VAR20);
*VAR10++ = VAR9;
strncpy((char *) VAR10, VAR2->VAR20, 32);
VAR10 += VAR9;


*VAR10++ = VAR21;
*VAR10++ = 8;
*VAR10++ = 2 | 0x80;
*VAR10++ = 4 | 0x80;
*VAR10++ = 11 | 0x80;
*VAR10++ = 22 | 0x80;
*VAR10++ = 12 | 0x80;
*VAR10++ = 24 | 0x80;
*VAR10++ = 48 | 0x80;
*VAR10++ = 72;


*VAR10++ = VAR22;
*VAR10++ = 4;
*VAR10++ = 48;
*VAR10++ = 72;
*VAR10++ = 96;
*VAR10++ = 108;

VAR9 = VAR10 - VAR5;
FUN6("");
FUN7(VAR2, VAR7, VAR9);
}