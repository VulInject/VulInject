static VAR1 FUN1(gpointer VAR2, gint VAR3, b_input_condition VAR4)
{
unsigned char VAR5[512];
struct VAR6 *VAR7 = VAR2;

FUN2(VAR7->VAR8);

if (read(VAR3, VAR5, 2) < 2) {
return FUN3(VAR7, VAR9);
}

if ((VAR5[0] != 0x05) || (VAR5[1] == 0xff)) {
return FUN3(VAR7, VAR9);
}

if (VAR5[1] == 0x02) {
unsigned int VAR10 = strlen(VAR11), VAR12 = strlen(VAR13);
VAR5[0] = 0x01;  
VAR5[1] = VAR10;
memcpy(VAR5 + 2, VAR11, VAR10);
VAR5[2 + VAR10] = VAR12;
memcpy(VAR5 + 2 + VAR10 + 1, VAR13, VAR12);
if (write(VAR3, VAR5, 3 + VAR10 + VAR12) < 3 + VAR10 + VAR12) {
return FUN3(VAR7, VAR9);
}

VAR7->VAR8 = FUN4(VAR3, VAR14, VAR15, VAR7);
} else {
FUN5(VAR7, VAR3);
}

return VAR9;
}