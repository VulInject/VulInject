int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4, u16 VAR5)
{
static const s8 VAR6[2][2][3] = {
{
{ -2, 15, 33 },
{  0, 16, 34 }
},
{
{ -2, 15, 33 },
{ -2, 16, 34 }
}
};
int VAR7 = FUN2(VAR8, VAR5);
int VAR9 = FUN2(VAR10, VAR4->VAR11);
int VAR12 = FUN2(VAR13, VAR4->VAR14);
int VAR15;

if (VAR12) 
VAR12--;

VAR15 = 8;
VAR15 -= VAR6[VAR9][VAR7][VAR12];
VAR15 -= FUN2(VAR16, VAR4->VAR14);
VAR15 -= VAR2->VAR17->VAR18;
VAR15 -= VAR2->VAR17->VAR19[0];

return VAR15;
}