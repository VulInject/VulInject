static int rgclk_enable(struct clk_hw *hw)
{
struct clk_gate *gate = to_clk_gate(hw);
struct stm32_rgate *rgate = to_rgclk(gate);
int bit_status;
unsigned int timeout = RGATE_TIMEOUT;

if (clk_gate_ops.is_enabled(hw))
return 0;

disable_power_domain_write_protection();

clk_gate_ops.enable(hw);

do {
bit_status = !(readl(gate->reg) & BIT(rgate->bit_rdy_idx));
if (bit_status)
udelay(100);

} while (bit_status && --timeout);

enable_power_domain_write_protection();

return bit_status;
}