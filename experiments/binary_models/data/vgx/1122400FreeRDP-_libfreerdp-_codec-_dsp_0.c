static VAR1 FUN1(VAR2* VAR3, const VAR4* VAR5, size_t VAR6,
VAR7* VAR8)
{
NeAACDecFrameInfo VAR9;
void* VAR10;
size_t VAR11 = 0;

if (!VAR3 || !VAR5 || !VAR8)
return VAR12;

if (!VAR3->VAR13)
{
union
{
const void* VAR14;
void* VAR15;
} VAR16;
unsigned long VAR17;
unsigned char VAR18;
long VAR19;
VAR16.VAR14 = VAR5;
VAR19 = FUN2(VAR3->VAR20,  VAR16.VAR15, VAR6,
&VAR17, &VAR18);

if (VAR19 != 0)
return VAR12;

if (VAR18 != VAR3->VAR21.VAR22)
return VAR12;

if (VAR17 != VAR3->VAR21.VAR23)
return VAR12;

VAR3->VAR13 = VAR24;
}

while (VAR11 < VAR6)
{
union
{
const void* VAR14;
void* VAR15;
} VAR16;
size_t VAR25;
void* VAR26;
VAR25 = VAR3->VAR21.VAR23 * VAR3->VAR21.VAR22 *
VAR3->VAR21.VAR27 / 8;

if (!FUN3(VAR8, VAR25))
return VAR12;

VAR26 = FUN4(VAR8);

VAR16.VAR14 = &VAR5[VAR11];
VAR10 = FUN5(VAR3->VAR20, &VAR9, VAR16.VAR15, VAR6 - VAR11, &VAR26,
FUN6(VAR8));

if (VAR9.VAR28 != 0)
return VAR12;

VAR11 += VAR9.VAR29;

if (VAR9.VAR30 == 0)
continue;

FUN7(VAR8, VAR9.VAR30 * VAR3->VAR21.VAR27 / 8);
}

return VAR24;
}