$AddonBuilder = Join-Path (Get-ItemProperty "HKCU:\Software\Bohemia Interactive\Arma 3 Tools").path "AddonBuilder\AddonBuilder.exe"

# path "E:\91st\91st-acex-compat"

$mod_path = "E:\91st\91st-acex-compat\Addons"
$include_path = (Resolve-Path "E:\91st\91st-acex-compat\Addons\tools\build\buildIncludes.txt").Path

$target = Resolve-Path -Path $mod_path

& $AddonBuilder $target "E:\91st\91st_compat_test\addons" -clear -include="$include_path"

if ($LASTEXITCODE -ne 0)
{
    Write-Host "Press Enter to continue..."
    $null = $Host.UI.RawUI.ReadKey("NoEcho,IncludeKeyDown")
}