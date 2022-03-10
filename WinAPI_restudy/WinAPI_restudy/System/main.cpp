/*Doxygenの使い方も一緒に勉強
*ファイル名へのコメント
* 
/**
* @file ファイル名
* @brief 簡単な説明
* @author 作成者
* @date 作成日
* @detail 詳細な説明
*/

/**
* @file    main.cpp
* @brief   エントリポイントやWINAPIの初期化
* @author  Ryuga Sakakibara
* @date    2021/09/15
* @details none
*/
#include <Windows.h>

/**
* 関数へのコメント
* @fn void function(int a, int b)
* @brief 簡単な説明（～する関数）
* @param[in] a(引数名) 引数の説明
* @param[out] b(引数名) 引数の説明
* @return bool 戻り値の説明
* @details 詳細な説明
*/

/**
* @fn int WinMain(HINSTANCE,HINSTANCE,LPSTR,int)
* @brief WinAPIのエントリポイント
* @param[in] インスタンスハンドル(何かを識別する数値)
* @param[in] Win16の産物(基本NULL)
* @param[in] LPSTR(メインアプリケーションウィンドウが最小・最大化、または
*				   正常に表示されるかを示すフラグ)
* @param[in] アプリケーションの初期表示方法
* @return アプリケーションの終了コード　通常0
*/
int WINAPI WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int nCmdShow)
{
	/**
	* @fn MessageBox(HWND hWnd,LPCTSTR lpText,LPCTSTR lpCaption,UINT uType)
	* @brief メッセージボックスを表示する関数(?)
	* @param[in] 親ウィンドウの指定
	* @param[in] メッセージボックスに表示する文字列
	* @param[in] メッセージボックスのフレームに表示されるタイトル
	* @param[in] メッセージボックスの形態を表す定数
	* @return	 押されたボタンのフラグ
	*/
	MessageBox(NULL,
			   TEXT("HelloWorld"),
			   TEXT("世界へ挨拶"), 
			   MB_OK|
			   MB_ICONINFORMATION);

	return 0;
}