$publisherCmd = Join-Path (Get-ItemProperty "HKCU:\Software\Bohemia Interactive\Arma 3 Tools").path "Publisher\PublisherCmd.exe"

& $publisherCmd update /id:2638056968 /changenote:"See: https://discord.com/channels/599060077034340365/1040531312613785640 " /path:"$((Resolve-Path "..\..\91st_compat_test").Path)"

