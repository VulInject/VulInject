static int verify_pin(sc_card_t *card, int pin_reference, const char *pin_value)
{
int r, tries_left = -1;
struct sc_pin_cmd_data data;

memset(&data, 0, sizeof(data));
data.cmd = SC_PIN_CMD_VERIFY;

data.pin_type = SC_AC_CHV;

data.pin_reference = pin_reference;

data.flags = SC_PIN_CMD_NEED_PADDING;

if (card->reader->capabilities & SC_READER_CAP_PIN_PAD)
{
printf("Please enter PIN on the reader's pin pad.\n");
data.pin1.prompt = "Please enter PIN";
data.flags |= SC_PIN_CMD_USE_PINPAD;
}
else
{
if(pin_value == NULL)
{
return SC_ERROR_INVALID_ARGUMENTS;
}

data.pin1.data = (u8*)pin_value;
data.pin1.len = strlen(pin_value);
}

r = sc_pin_cmd(card, &data, &tries_left);

if (r)
{
if (r == SC_ERROR_PIN_CODE_INCORRECT)
{
if (tries_left >= 0)
printf("Error %d attempts left.\n", tries_left);
else
printf("Wrong pin.\n");
}
else
printf("The pin can be verify: %s\n", sc_strerror(r));
return -1;
}
printf("Pin correct.\n");
return 0;
}