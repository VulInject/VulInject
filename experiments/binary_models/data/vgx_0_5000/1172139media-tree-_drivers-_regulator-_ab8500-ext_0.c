static int ab8500_ext_list_voltage(struct regulator_dev *rdev,
unsigned selector)
{
struct regulation_constraints *regu_constraints = rdev->constraints;

if (regu_constraints == NULL) {
dev_err(rdev_get_dev(rdev), "regulator constraints null pointer\n");
return -EINVAL;
}

if (regu_constraints->min_uV && regu_constraints->max_uV) {
if (regu_constraints->min_uV == regu_constraints->max_uV)
return regu_constraints->min_uV;
}
return -EINVAL;
}

static struct regulator_ops ab8500_ext_regulator_ops = {
.enable			= ab8500_ext_regulator_enable,
.disable		= ab8500_ext_regulator_disable,
.is_enabled		= ab8500_ext_regulator_is_enabled,
.set_mode		= ab8500_ext_regulator_set_mode,
.get_mode		= ab8500_ext_regulator_get_mode,
.set_voltage		= ab8500_ext_set_voltage,
.list_voltage		= ab8500_ext_list_voltage,
};