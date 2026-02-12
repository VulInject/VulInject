static void stm32_enable_oscillator_hse(struct clk_stm32_priv *priv,
struct stm32_clk_platdata *pdata)
{
struct clk_oscillator_data *osc_data = clk_oscillator_get_data(OSC_HSE);
struct stm32_osci_dt_cfg *osci = &pdata->osci[OSC_HSE];

if (osci->freq == 0U)
return;

clk_oscillator_set_bypass(priv, osc_data,  osci->digbyp, osci->bypass);


if (stm32_gate_rdy_enable(osc_data->gate_id)) {
EMSG("timeout to enable hse clock");
panic();
}

clk_oscillator_set_css(priv, osc_data, osci->css);
}