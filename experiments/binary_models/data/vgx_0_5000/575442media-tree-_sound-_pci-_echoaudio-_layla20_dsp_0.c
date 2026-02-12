static int set_output_clock(struct echoaudio *chip, u16 clock)
{
switch (clock) {
case ECHO_CLOCK_SUPER:
clock = LAYLA20_OUTPUT_CLOCK_SUPER;
break;
case ECHO_CLOCK_WORD:
clock = LAYLA20_OUTPUT_CLOCK_WORD;
break;
default:
dev_err(chip->card->dev, "set_output_clock wrong clock\n");
return -EINVAL;
}

if (wait_handshake(chip))
return -EIO;

chip->comm_page->output_clock = cpu_to_le16(clock);
chip->output_clock = clock;
clear_handshake(chip);
return send_vector(chip, DSP_VC_UPDATE_CLOCKS);
}