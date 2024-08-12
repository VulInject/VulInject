void FUN1(void);
void FUN2(void);


static int VAR1 = -1;
static dissector_handle_t VAR2;


static gboolean VAR3 = VAR4;


static int VAR5 = -1;
static int VAR6 = -1;
static int VAR7 = -1;
static int VAR8 = -1;
static int VAR9 = -1;
static int VAR10 = -1;
static int VAR11 = -1;
static int VAR12 = -1;
static int VAR13 = -1;
static int VAR14 = -1;
static int VAR15 = -1;
static int VAR16 = -1;
static int VAR17 = -1;
static int VAR18 = -1;
static int VAR19 = -1;
static int VAR20 = -1;
static int VAR21 = -1;
static int VAR22 = -1;
static int VAR23 = -1;
static int VAR24 = -1;
static int VAR25 = -1;
static int VAR26 = -1;

static gint VAR27 = -1;


static VAR28
FUN3(VAR29 *VAR30, VAR31 *VAR32, VAR33 *VAR34, gint VAR35)
{
VAR36 *VAR37;
VAR31 *VAR38;

guint32 VAR39 = 0;
gint  VAR40, VAR41 = 0;


if( FUN4(VAR30, VAR35) > VAR42 ) {

VAR39 = FUN5(VAR30, VAR35);


VAR37 = FUN6(VAR32, VAR8, VAR30, VAR35, VAR42, VAR43|VAR44);
VAR38 = FUN7(VAR37, VAR27);


FUN6(VAR38, VAR9, VAR30, VAR35, VAR42, VAR44);
VAR35 += VAR42;
VAR37 = FUN6(VAR38, VAR10, VAR30, VAR35, VAR39, VAR43);


VAR40 = (FUN8(VAR30, VAR35, VAR39, '') - VAR35);


if( VAR40 > 0 ) {
const VAR45* VAR46;
VAR38 = FUN7(VAR37, VAR27);
FUN9(VAR38, VAR11, VAR30, VAR35, VAR40, VAR43|VAR47, VAR34->VAR48, &VAR46);
FUN6(VAR38, VAR12, VAR30, VAR35+VAR40+1, VAR39 - VAR40 - 1, VAR43);

FUN10(VAR34->VAR49, VAR50, VAR46);
}
VAR41 = VAR39 + VAR42;
}

return VAR41;
}