static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
u16 VAR7;

VAR7 = FUN3(VAR6, VAR8) & (0x1C0);
VAR7 = VAR7 >> 6;
VAR7 = (VAR7 >= 4) ? 4  : (3 -  VAR7);
VAR4->VAR9.VAR10.VAR9[0] = VAR7;
return 0;

}

static const struct snd_kcontrol_new VAR11[] = {
FUN4("", VAR12,
VAR13, 0, 127, 0, VAR14),
FUN5("", VAR15, 3, 1, 1),
FUN6("", VAR16,
VAR17, 7, 1, 0),
FUN4("", VAR16,
VAR17, 0, 31, 0, VAR18),
FUN5("", VAR8, 1, 1, 1),
FUN5("", VAR8, 0, 1, 0),
FUN7("", VAR8, 6, 4, 0,
VAR19,
VAR20, VAR21),
FUN8("", VAR22),
};


static const struct snd_kcontrol_new VAR23[] = {
FUN9("", VAR8, 3, 1, 0),
FUN9("", VAR8, 5, 1, 0),
FUN9("", VAR8, 4, 1, 0),
};

static const struct snd_soc_dapm_widget VAR24[] = {
FUN10("", "", VAR25, 3, 1),
FUN11("", "", VAR25, 2, 1),
FUN12("", VAR26, 0, 0,
&VAR27),
FUN13("", VAR25, 4, 1,
&VAR23[0],
FUN14(VAR23)),
FUN15("", VAR25, 0, 1, NULL, 0),
FUN15("", VAR25, 1, 1, NULL, 0),

FUN16(""),
FUN16(""),
FUN16(""),
FUN16(""),

FUN17(""),
FUN17(""),

FUN17(""),
};

static const struct snd_soc_dapm_route VAR28[] = {

{"", "", ""},
{"", "", ""},
{"", "", ""},


{"", NULL, ""},
{"", NULL, ""},
{"", NULL, ""},
{"", NULL, ""},


{"", NULL, ""},
{"", NULL, ""},
{"", NULL, ""},


{"", "", ""},
{"", "", ""},
{"", NULL, ""},

};


struct VAR29 {
struct VAR30 *VAR30;
int VAR31;
int VAR32;
int VAR33;
};