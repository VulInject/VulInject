static void FUN1(struct VAR1 *VAR1)
{
int VAR2;
VAR3 *VAR4;
static u8 VAR5[][2] = {
{0x71, 0x00},
{0x70, 0x09},
{0x71, 0x80},
{0x70, 0x05}
};

for (;;) {

FUN2(VAR1->VAR6,
VAR1->VAR7[0]->VAR8,
VAR1->VAR7[0]->VAR9,
VAR10, NULL,
VAR11);


VAR2 = 0;
VAR4 = VAR1->VAR7[0]->VAR9;
while ((VAR2 < (VAR10 - 1)) &&
((VAR4[VAR2] != 0xff) || (VAR4[VAR2+1] != 0xd9)))
VAR2++;

if (VAR2 != (VAR10 - 1))

break;
}

for (VAR2 = 0; VAR2 < FUN3(VAR5); VAR2++)
FUN4(VAR1, VAR5[VAR2]);
}