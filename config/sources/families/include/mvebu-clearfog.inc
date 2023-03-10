case $BRANCH in

	legacy | current)

		# Check https://developer.solid-run.com/knowledge-base/a388-u-boot
		# for advanced config options
		BOOTSOURCE='https://github.com/SolidRun/u-boot'
		BOOTBRANCH='branch:v2018.01-solidrun-a38x'
		BOOTDIR='u-boot-armada'
		BOOTPATCHDIR='u-boot-clearfog'
		BOOTSCRIPT='boot-mvebu.cmd:boot.cmd'
		UBOOT_TARGET_MAP=";sdhc;u-boot-spl-sdhc.kwb:u-boot.mmc
						  ;mmc;u-boot-spl-mmc.kwb:u-boot.emmc
						  ;spi;u-boot-spl-spi.kwb:u-boot.flash
						  ;sata;u-boot-spl-sata.kwb:u-boot.sata
						  ;uart;u-boot-spl-uart.kwb:u-boot.uart"

		;;
	edge)
		# Check https://developer.solid-run.com/knowledge-base/a388-u-boot
		# for advanced config options
		BOOTSOURCE='https://github.com/SolidRun/u-boot'
		BOOTBRANCH='branch:v2018.01-solidrun-a38x'
		BOOTDIR='u-boot-armada'
		BOOTPATCHDIR='u-boot-clearfog'
		BOOTSCRIPT='boot-mvebu.cmd:boot.cmd'
		UBOOT_TARGET_MAP=";sdhc;u-boot-spl-sdhc.kwb:u-boot.mmc
						  ;mmc;u-boot-spl-mmc.kwb:u-boot.emmc
						  ;spi;u-boot-spl-spi.kwb:u-boot.flash
						  ;sata;u-boot-spl-sata.kwb:u-boot.sata
						  ;uart;u-boot-spl-uart.kwb:u-boot.uart"

		if [[ $BOARD == clearfogbase ]]; then
			OVERLAY_PREFIX='armada-388-clearfog-base'
		else
			OVERLAY_PREFIX='armada-388-clearfog'
		fi
		;;
esac
