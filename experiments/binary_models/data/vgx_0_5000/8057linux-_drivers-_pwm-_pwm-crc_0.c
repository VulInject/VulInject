static int crc_pwm_get_state(struct pwm_chip *chip, struct pwm_device *pwm,
struct pwm_state *state)
{
struct crystalcove_pwm *crc_pwm = to_crc_pwm(chip);
struct device *dev = crc_pwm->chip.dev;
unsigned int clk_div, clk_div_reg, duty_cycle_reg;
int error;

error = regmap_read(crc_pwm->regmap, PWM0_CLK_DIV, &clk_div_reg);
if (error) {
dev_err(dev, "Error reading PWM0_CLK_DIV %d\n", error);
return error;
}

error = regmap_read(crc_pwm->regmap, PWM0_DUTY_CYCLE, &duty_cycle_reg);
if (error) {
dev_err(dev, "Error reading PWM0_DUTY_CYCLE %d\n", error);
return error;
}

clk_div = (clk_div_reg & ~PWM_OUTPUT_ENABLE) + 1;

state->period =
DIV_ROUND_UP(clk_div * NSEC_PER_USEC * 256, PWM_BASE_CLK_MHZ);
state->duty_cycle =
DIV_ROUND_UP_ULL(duty_cycle_reg * state->period, PWM_MAX_LEVEL);
state->polarity = PWM_POLARITY_NORMAL;
state->enabled = !!(clk_div_reg & PWM_OUTPUT_ENABLE);

return 0;
}

static const struct pwm_ops crc_pwm_ops = {
.apply = crc_pwm_apply,
.get_state = crc_pwm_get_state,
};