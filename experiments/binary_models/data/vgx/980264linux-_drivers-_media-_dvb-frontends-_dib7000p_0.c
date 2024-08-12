static int FUN1(struct VAR1 *VAR2)
{
VAR3 *VAR4, *VAR5;
struct i2c_msg VAR6[2] = {
{.VAR7 = 18 >> 1, .VAR8 = 0, .VAR9 = 2},
{.VAR7 = 18 >> 1, .VAR8 = VAR10, .VAR9 = 2},
};
int VAR11 = 0;

VAR4 = FUN2(2, VAR12);
if (!VAR4)
return -VAR13;
VAR5 = FUN2(2, VAR12);
if (!VAR5) {
VAR11 = -VAR13;
goto VAR14;
}

VAR6[0].VAR15 = VAR4;
VAR6[1].VAR15 = VAR5;

VAR4[0] = 0x03;
VAR4[1] = 0x00;

if (FUN3(VAR2, VAR6, 2) == 2)
if (VAR5[0] == 0x01 && VAR5[1] == 0xb3) {
FUN4("");
VAR11 = 1;
goto VAR16;
}

VAR6[0].VAR7 = VAR6[1].VAR7 = 0x40;

if (FUN3(VAR2, VAR6, 2) == 2)
if (VAR5[0] == 0x01 && VAR5[1] == 0xb3) {
FUN4("");
VAR11 = 1;
goto VAR16;
}

FUN4("");

VAR16:
FUN5(VAR5);
VAR14:
FUN5(VAR4);
return VAR11;
}