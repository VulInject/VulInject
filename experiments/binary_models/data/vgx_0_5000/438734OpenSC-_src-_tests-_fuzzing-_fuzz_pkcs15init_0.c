void do_init_app(struct sc_profile *profile, struct sc_pkcs15_card *p15card, sc_card_t *card,
unsigned char *so_pin, unsigned char *so_puk)
{
struct sc_pkcs15init_initargs init_args;
sc_pkcs15_auth_info_t         info;
int                           so_puk_disabled = 0;

memset(&init_args, 0, sizeof(init_args));
sc_pkcs15init_get_pin_info(profile, SC_PKCS15INIT_SO_PIN, &info);
if ((info.attrs.pin.flags & SC_PKCS15_PIN_FLAG_UNBLOCK_DISABLED) &&
(info.attrs.pin.flags & SC_PKCS15_PIN_FLAG_SO_PIN))
so_puk_disabled = 1;

sc_pkcs15init_get_pin_info(profile, SC_PKCS15INIT_SO_PUK, &info);

init_args.so_pin = so_pin;
init_args.so_pin_len = 8;

if (!so_puk_disabled) {
init_args.so_puk = so_puk;
init_args.so_puk_len = 8;
}

sc_pkcs15init_add_app(card, profile, &init_args);
}