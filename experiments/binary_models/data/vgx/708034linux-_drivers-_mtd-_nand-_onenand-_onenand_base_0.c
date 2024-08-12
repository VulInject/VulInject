static int FUN1(struct VAR1 *VAR2, int VAR3, int VAR4)
{
struct VAR5 *this = VAR2->VAR6;
int VAR7, VAR8;
int VAR9;
struct mtd_oob_ops VAR10 = {
.VAR11 = VAR12,
.VAR13 = 0,
.VAR14	= VAR2->VAR15,
.VAR16	= NULL,
.VAR17	= this->VAR18,
};
loff_t VAR19;

FUN2(VAR20 "", VAR3, VAR4);

for (VAR9 = VAR3; VAR9 <= VAR4; VAR9++) {
VAR19 = FUN3(this, VAR9);
if (FUN4(VAR2, VAR19, 0))
continue;


VAR8 = FUN5(VAR2, VAR19, &VAR10);
if (VAR8)
return VAR8;

for (VAR7 = 0; VAR7 < VAR2->VAR15; VAR7++)
if (this->VAR18[VAR7] != 0xff)
break;

if (VAR7 != VAR2->VAR15) {
FUN2(VAR21 "",
VAR22, VAR9);
return 1;
}
}

return 0;
}