static void *FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
struct VAR5 *VAR6 = VAR2->private;
struct VAR7 *VAR8;
struct VAR9 *VAR10;
loff_t VAR11 = *VAR4;


VAR6->VAR12 = FUN2(VAR6->VAR13);
if (!VAR6->VAR12)
return FUN3(-VAR14);

VAR8 = VAR6->VAR8;
if (!VAR8 || !FUN4(VAR8))
return NULL;

FUN5(&VAR8->VAR15);

for (VAR10 = FUN6(&VAR8->VAR16); VAR10; VAR10 = FUN7(VAR10))
if (VAR11-- == 0)
return VAR10;

FUN8(&VAR8->VAR15);
FUN9(VAR8);
return NULL;
}