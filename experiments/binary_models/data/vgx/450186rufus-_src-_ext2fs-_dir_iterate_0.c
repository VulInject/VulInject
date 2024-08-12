VAR1 FUN1(ext2_filsys VAR2,
ext2_ino_t VAR3,
int VAR4,
char *VAR5,
int (*VAR6)(ext2_ino_t	VAR3,
int		VAR7,
struct VAR8 *VAR9,
int	VAR10,
int	VAR11,
char	*VAR12,
void	*VAR13),
void *VAR13)
{
struct		dir_context	VAR14;
errcode_t	VAR15;

FUN2(VAR2, VAR16);

VAR15 = FUN3(VAR2, VAR3);
if (VAR15)
return VAR15;

VAR14.VAR3 = VAR3;
VAR14.VAR4 = VAR4;
if (VAR5)
VAR14.VAR12 = VAR5;
else {
VAR15 = FUN4(VAR2->VAR11, &VAR14.VAR12);
if (VAR15)
return VAR15;
}
VAR14.VAR6 = VAR6;
VAR14.VAR13 = VAR13;
VAR14.VAR17 = 0;
VAR15 = FUN5(VAR2, VAR3, VAR18, 0,
VAR19, &VAR14);
if (!VAR5)
FUN6(&VAR14.VAR12);
if (VAR15 == VAR20) {
(void) FUN7(VAR2, VAR3, &VAR14);
VAR15 = 0;
}
if (VAR15)
return VAR15;
return VAR14.VAR17;
}

struct VAR21 {
int (*VAR6)(struct VAR8 *VAR9,
int		VAR10,
int		VAR11,
char	*VAR12,
void	*VAR13);
void *VAR22;
};