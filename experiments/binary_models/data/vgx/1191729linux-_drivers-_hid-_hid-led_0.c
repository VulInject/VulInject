struct {
__u8 VAR1;
__u8 VAR2;
__u8 VAR3;
__u8 VAR4;
} VAR5;
struct {
__u8 VAR6;
} VAR7;
struct {
__le16 VAR8;
__le16 VAR9;
__u8 VAR10;
} VAR11;
};


struct VAR12;
struct VAR13;

struct VAR14 {
enum hidled_type	VAR15;
const char		*VAR16;
const char		*VAR17;
enum led_brightness	VAR18;
int			VAR19;
size_t			VAR20;
enum hidled_report_type	VAR21;
int (*VAR22)(struct VAR12 *VAR23);
int (*write)(struct VAR24 *VAR25, enum led_brightness VAR26);
};

struct VAR27 {
struct led_classdev	VAR25;
struct VAR13	*VAR28;
char			VAR16[32];
};

struct VAR13 {
struct VAR12	*VAR23;
struct hidled_led	VAR29;
struct hidled_led	VAR30;
struct hidled_led	VAR31;
u8			VAR32;
};

struct VAR12 {
const struct VAR14 *VAR33;
struct VAR34       *VAR35;
struct VAR13	*VAR28;
VAR36			*VAR37;
struct mutex		VAR38;
};



static bool VAR39;
FUN1(VAR39, bool, VAR40 | VAR41);
FUN2(VAR39,
"");

static int FUN3(struct VAR12 *VAR23, VAR42 *VAR37)
{
int VAR43;

FUN4(&VAR23->VAR38);


memcpy(VAR23->VAR37, VAR37, VAR23->VAR33->VAR20);

if (VAR23->VAR33->VAR21 == VAR44)
VAR43 = FUN5(VAR23->VAR35, VAR37[0], VAR23->VAR37,
VAR23->VAR33->VAR20,
VAR45,
VAR46);
else if (VAR23->VAR33->VAR21 == VAR47)
VAR43 = FUN6(VAR23->VAR35, VAR23->VAR37,
VAR23->VAR33->VAR20);
else
VAR43 = -VAR48;

FUN7(&VAR23->VAR38);

if (VAR43 < 0)
return VAR43;

return VAR43 == VAR23->VAR33->VAR20 ? 0 : -VAR49;
}