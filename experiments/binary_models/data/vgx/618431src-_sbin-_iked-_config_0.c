int
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR3)
{
struct VAR4	*VAR5;
struct iked_proposal	 VAR6, *VAR7;
struct iked_transform	 VAR8;
off_t			 VAR9 = 0;
unsigned int		 VAR10, VAR11;
VAR12			*VAR13 = (VAR12 *)VAR3->VAR14;

FUN2(VAR3, VAR5);
FUN3("", VAR15);

if ((VAR5 = FUN4(NULL)) == NULL)
FUN5("");

memcpy(VAR5, VAR13, sizeof(*VAR5));
VAR9 += sizeof(*VAR5);

FUN6(&VAR5->VAR16);
FUN6(&VAR5->VAR17);
FUN6(&VAR5->VAR18);
FUN6(&VAR5->VAR19);
FUN7(&VAR5->VAR20);

for (VAR10 = 0; VAR10 < VAR5->VAR21; VAR10++) {
memcpy(&VAR6, VAR13 + VAR9, sizeof(VAR6));
VAR9 += sizeof(VAR6);

if ((VAR7 = FUN8(&VAR5->VAR18,
VAR6.VAR22, VAR6.VAR23)) == NULL)
FUN5("");

for (VAR11 = 0; VAR11 < VAR6.VAR24; VAR11++) {
memcpy(&VAR8, VAR13 + VAR9, sizeof(VAR8));
VAR9 += sizeof(VAR8);

if (FUN9(VAR7, VAR8.VAR25,
VAR8.VAR26, VAR8.VAR27,
VAR8.VAR28) != 0)
FUN5("");
}
}


VAR5->VAR29 = 0;

FUN10(&VAR2->VAR30, VAR5, VAR31);

if (VAR5->VAR32 & VAR33) {

if (VAR2->VAR34 != NULL)
FUN11(VAR2, VAR2->VAR34);
VAR2->VAR34 = VAR5;
}

return (0);
}