#include <Novice.h>
#include "Scene.h"
#include "GameScene.h"
#include "TitleScene.h"

const char kWindowTitle[] = "LC1A_27_ワタナベ_マサト";

bool Scene::isTransition;

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	// キー入力結果を受け取る箱
	char keys[256] = { 0 };
	char preKeys[256] = { 0 };

	// シーンの生成
	Scene* scene=new TitleScene;
	
	int nowScene = 0;//0:TitleScene 1:GameScene
	
	// ウィンドウの×ボタンが押されるまでループ
	while (Novice::ProcessMessage() == 0) {
		// フレームの開始
		Novice::BeginFrame();

		// キー入力を受け取る
		memcpy(preKeys, keys, 256);
		Novice::GetHitKeyStateAll(keys);

		///
		/// ↓更新処理ここから
		///
		if (scene->GetTransition()) {
			delete scene;
			if (nowScene == 0) {
				scene = new GameScene;
				nowScene = 1;
			}
			else {
				scene = new TitleScene;
				nowScene = 0;
			}
			scene->SetTransition(false);
		}

		scene->Update(keys, preKeys);

		///
		/// ↑更新処理ここまで
		///

		///
		/// ↓描画処理ここから
		///

		scene->Draw();

		///
		/// ↑描画処理ここまで
		///

		// フレームの終了
		Novice::EndFrame();

		// ESCキーが押されたらループを抜ける
		if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
			break;
		}
	}

	// ライブラリの終了
	Novice::Finalize();

	delete scene;

	return 0;
}
