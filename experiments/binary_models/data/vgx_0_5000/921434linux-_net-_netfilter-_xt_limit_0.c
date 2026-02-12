
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Herve Eychenne <rv@wallfire.org>");
MODULE_DESCRIPTION("Xtables: rate-limit match");
MODULE_ALIAS("ipt_limit");
MODULE_ALIAS("ip6t_limit");








static bool
limit_mt(const struct sk_buff *skb, struct xt_action_param *par)
{
const struct xt_rateinfo *r = par->matchinfo;
struct xt_limit_priv *priv = r->master;
unsigned long now;
u32 old_credit, new_credit, credit_increase = 0;
bool ret;


if ((READ_ONCE(priv->credit) < r->cost) && (READ_ONCE(priv->prev) == jiffies))
return false;

do {
now = jiffies;
credit_increase += (now - xchg(&priv->prev, now)) * CREDITS_PER_JIFFY;
old_credit = READ_ONCE(priv->credit);
new_credit = old_credit;
new_credit += credit_increase;
if (new_credit > r->credit_cap)
new_credit = r->credit_cap;
if (new_credit >= r->cost) {
ret = true;
new_credit -= r->cost;
} else {
ret = false;
}
} while (cmpxchg(&priv->credit, old_credit, new_credit) != old_credit);

return ret;
}