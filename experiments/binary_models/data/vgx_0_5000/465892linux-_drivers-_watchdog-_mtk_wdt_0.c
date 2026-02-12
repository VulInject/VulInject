static int toprgu_register_reset_controller(struct platform_device *pdev,
int rst_num)
{
int ret;
struct mtk_wdt_dev *mtk_wdt = platform_get_drvdata(pdev);

spin_lock_init(&mtk_wdt->lock);

mtk_wdt->rcdev.owner = THIS_MODULE;
mtk_wdt->rcdev.nr_resets = rst_num;
mtk_wdt->rcdev.ops = &toprgu_reset_ops;
mtk_wdt->rcdev.of_node = pdev->dev.of_node;
ret = devm_reset_controller_register(&pdev->dev, &mtk_wdt->rcdev);
if (ret != 0)
dev_err(&pdev->dev,
"couldn't register wdt reset controller: %d\n", ret);
return ret;
}