static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = &VAR2->VAR5;
struct VAR6 *VAR6 = (struct VAR6 *) VAR2->VAR7->VAR8;
u32 VAR9;
u8 VAR10[4];
struct i2c_msg VAR11 = {.VAR12 = 0x60,.VAR13 = 0,.VAR10 = VAR10,.VAR14 = sizeof(VAR10) };

if ((VAR4->VAR15 < 950000) || (VAR4->VAR15 > 2150000))
return -VAR16;

VAR9 = (VAR4->VAR15 + (500 - 1)) / 500;	
VAR10[0] = (VAR9 >> 8) & 0x7f;
VAR10[1] = VAR9 & 0xff;
VAR10[2] = 0x80 | ((VAR9 & 0x18000) >> 10) | 2;
VAR10[3] = 0x20;

if (VAR4->VAR17 < 4000000)
VAR10[3] |= 1;

if (VAR4->VAR15 < 1250000)
VAR10[3] |= 0;
else if (VAR4->VAR15 < 1550000)
VAR10[3] |= 0x40;
else if (VAR4->VAR15 < 2050000)
VAR10[3] |= 0x80;
else if (VAR4->VAR15 < 2150000)
VAR10[3] |= 0xC0;

if (VAR2->VAR18.VAR19)
VAR2->VAR18.FUN2(VAR2, 1);
if (FUN3(&VAR6->VAR20.VAR21, &VAR11, 1) != 1)
return -VAR22;
return 0;
}