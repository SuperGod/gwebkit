package main

import "../webview"

func main() {
	app := webview.NewApp()
	v := webview.NewWebView()
	v.SetUrl("http://www.oschina.net")
	v.Show()
	app.Run()
}
