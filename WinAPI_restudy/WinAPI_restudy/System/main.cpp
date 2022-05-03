#include <Windows.h>

//	↓呼び出し規約(Calling Convention)と呼ばれている。関数の呼び出し方式を表す
int WINAPI WinMain(
	HINSTANCE hInstance,		//	現在のインスタンスへのハンドル
	HINSTANCE hPrevInstance,	//	以前のインスタンスへのハンドル
	LPSTR lpCmdLine,			//	コマンドライン引数
	int nCmdShow)				//	表示状態のオプション
{
	/**
	*	WinMain			Windowsプログラムのエントリポイント
	*	hInstance		現在のアプリケーションを一意に示す識別値が入る
	*	hPrevInstance	Win16時代の異物らしい。Win32では常にNULLが入る
	*	lpCmdLine		コマンドライン引数が入る。コマンドライン引数ってなんぞ？
	*	nCmdShow		ウィンドウの表示状態を表す値が入る→あとのウィンドウの作成で詳しく
	*	return			WM_QUITメッセージのwParam値を指定する→あとのウィンドウプロシージャで詳しく
	*/

	/**
	*	MessageBox		メッセージボックスを表示する関数
	*	hWnd			オーナーウィンドウとするウィンドウを指定する
	*					今回はNULLを設定。オーナーウィンドウを持たないメッセージボックスを作成
	*	LPCTSTR			メッセージボックスのテキスト
	*	LPCTSTR			メッセージボックスのキャプション
	*	UType			メッセージボックスのタイプを表す整数値
	*					ここではwinuser.hで定義されている値を使用することができる
	*	
	*/
	MessageBox(NULL,
			   TEXT("HelloWorld"),
			   TEXT("世界へ挨拶"), 
			   MB_OK|
			   MB_ICONINFORMATION);

	return 0;
}