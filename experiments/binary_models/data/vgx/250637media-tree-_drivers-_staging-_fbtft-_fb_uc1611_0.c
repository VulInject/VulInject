FUN1(VAR1, VAR2, 0000);
FUN2(VAR1, "");

static unsigned int VAR3 = 3;
FUN1(VAR3, VAR2, 0000);
FUN2(VAR3, "");

static unsigned int VAR4 = 16;
FUN1(VAR4, VAR2, 0000);
FUN2(VAR4, "");


static unsigned int VAR5;
FUN1(VAR5, VAR2, 0000);
FUN2(VAR5, "");


static unsigned int VAR6 = 1;
FUN1(VAR6, VAR2, 0000);
FUN2(VAR6, "");


static unsigned int VAR7 = 3;
FUN1(VAR7, VAR2, 0000);
FUN2(VAR7, "");

static int FUN3(struct VAR8 *VAR9)
{
int VAR10;


VAR9->VAR11->VAR12 |= VAR13;
VAR10 = FUN4(VAR9->VAR11);
if (VAR10) {
FUN5(VAR9->VAR14->VAR15, "");
return VAR10;
}


FUN6(VAR9, 0xE2);


FUN6(VAR9, 0xE8 | (VAR1 & 0x03));


FUN6(VAR9, 0x81);
FUN6(VAR9, (VAR3 & 0x03) << 6 | (VAR4 & 0x3F));


FUN6(VAR9, 0x24 | (VAR5 & 0x03));


FUN6(VAR9, 0x28 | (VAR6 & 0x03));


FUN6(VAR9, 0x2C | (VAR7 & 0x03));


FUN6(VAR9, 0xA6 | (0x01 & 0x01));


FUN6(VAR9, 0xD0 | (0x02 & 0x03));


FUN6(VAR9, 0xA8 | 0x07);

return 0;
}