static int
FUN1(struct VAR1 *VAR2, unsigned char *VAR3, size_t VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR7->VAR6;
int VAR8, VAR9 = 0;
unsigned VAR10, VAR11[5] = {4,6,8,10,0};
unsigned char VAR12[0x10];

FUN2(VAR6);
if (VAR4<0x34)
FUN3(VAR6, VAR13, "");

VAR9 = FUN4(VAR2->VAR7, VAR12, sizeof(VAR12));
FUN3(VAR6, VAR9, "");

*(VAR3 + 12) = 0x26;
*(VAR3 + 13) = '';
for (VAR10=0, VAR8 = 0; VAR10<sizeof(VAR12); VAR10++)   {
if (VAR10==VAR11[VAR8])   {
*(VAR3 + 14 + VAR10*2 + VAR8) = '';
VAR8++;
}
sprintf((char *)(VAR3 + 14 + VAR10*2 + VAR8),"", VAR12[VAR10]);
}
*(VAR3 + 14 + VAR10*2 + VAR8) = (unsigned char)'';

FUN5(VAR6, VAR9);
}