void FUN1(void);

static bool	*VAR1[] = {
&VAR2, &VAR3, &VAR4, &VAR5, &VAR6, &VAR7, &VAR8, &VAR9, &VAR10,
&VAR11, &VAR12, &VAR13, &VAR14, &VAR15, &VAR16, &VAR17, &VAR18, &VAR19,
&VAR20
};

static char	*VAR21,
**VAR22[] = {
&VAR23, &VAR24, &VAR25, &VAR26, &VAR27, &VAR28, &VAR29, &VAR30, &VAR31,
&VAR32, &VAR33, &VAR34, &VAR35, &VAR36, &VAR37, &VAR38, &VAR39, &VAR40,
&VAR41, &VAR42, &VAR43, &VAR44, &VAR45, &VAR46, &VAR47, &VAR48, &VAR49,
&VAR50, &VAR51, &VAR52, &VAR53, &VAR54, &VAR55, &VAR56, &VAR57, &VAR58,
&VAR59, &VAR60, &VAR61, &VAR62, &VAR21, &VAR63, &VAR64, &VAR65, &VAR66,
&VAR67, &VAR68, &VAR69, &VAR70, &VAR71, &VAR72, &VAR73, &VAR74, &VAR75,
&VAR76, &VAR77, &VAR78, &VAR79, &VAR80, &VAR81,
&VAR82, &VAR83, &VAR84,
};

char		VAR85[2048];		

static char	*VAR86;		

static int	VAR87, VAR88;


short	VAR89 = -1;

int
FUN2(void)
{
if (FUN3(VAR90, &VAR91) < 0)
return (VAR92);
FUN4();
if (FUN5(VAR90, &VAR91) < 0)
VAR91.VAR93 = VAR94;
VAR89 = VAR91.VAR95;
VAR94 = VAR91.VAR93;
VAR96 = (VAR91.VAR93 & VAR97) != 0;
VAR98 = ((VAR91.VAR93 & VAR99) == 0);
VAR100 = ((VAR91.VAR93 & VAR101) == 0);
VAR91.VAR93 &= ~VAR99;
(void) FUN5(VAR90, &VAR91);
fprintf(VAR102, "", VAR96 ? "":"");
fprintf(VAR102, "", VAR98 ? "" : "");
fprintf(VAR102, "", VAR100 ? "" : "");
fprintf(VAR102, "", VAR89);
return (VAR103);
}