struct VAR1 *FUN1(struct VAR2 *VAR3,
unsigned long VAR4,
const char *VAR5)
{
struct VAR1 *VAR6 = VAR3->VAR7;
char *VAR8;
unsigned int VAR9;

if (!VAR5)
return NULL;

FUN2(&VAR3->VAR10);

for (VAR9 = 0; VAR9 < VAR3->VAR11->VAR12 && FUN3(&VAR6->VAR13); VAR9++, VAR6++)
;

if (VAR9 >= VAR3->VAR11->VAR12)
goto VAR14;

if (VAR4 & VAR15) {
VAR6->VAR16 = FUN4(VAR3);
if (!VAR6->VAR16)
goto VAR14;
}

VAR8 = FUN5(VAR17, "", VAR6->VAR18, VAR5);
if (!VAR8)
goto VAR19;

VAR6->VAR5 = VAR8;

if (VAR4 & VAR20)
VAR6->VAR21 = true;
else
VAR6->VAR21 = false;

FUN6(&VAR6->VAR13);

FUN7(&VAR3->VAR10);
return VAR6;

VAR19:
FUN8(VAR6->VAR16);
VAR6->VAR16 = NULL;
VAR14:
FUN7(&VAR3->VAR10);
return NULL;
}