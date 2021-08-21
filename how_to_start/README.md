## 始め方

1. このリポジトリをクローンする
2. 自分のフォルダを作る(your_nameフォルダみたいな感じで)

3. ブランチを切る（ブランチ名は被らないように自分の名前とか）

    `$ git switch -c [自分の名前]` <br>
    ↑で自分の名前のブランチ作成され、そのブランチに移動します。 <br>
    `$ git branch` <br>
    で今いるブランチを確認することができます。

4. 日付がわかるようなファイル名で解く(例：quiz_0815.c)

    ※3で作ったブランチで解いてね <br>
    解けたと思っても、動作確認を怠らないようにしましょう。 <br>
    全く分からない場合でも次へ進んで構いません。

5. add, commit, push

    `$ git add [変更したファイル名]` <br>
    で、このファイル名を管理対象とするよっていう意味です。 <br>
    
    `$ git commit -m "[コミットメッセージ]"` <br>
    で、addしたファイルをコミットメッセージと一緒にセーブするっていうイメージです。 <br>
    
    ファイルを変更した際には↑のコマンドを叩いてください。 <br>
    
    add, commitした後は、 <br>
    `$ git push origin [ブランチ名]` <br>
    
    で、GitHub上に変更点をあげてください。 <br>
    
    ちなみに、、 <br>
    `$ git status` <br>
    で、現在の状態を確認できます。以下のような表示がされます。
    
    ```
    On branch 作業ブランチ
    Your branch is up-to-date with 'リモートブランチ'.
    Changes to be committed:
      (use "git reset HEAD <file>..." to unstage)

        new file:   変更されているファイル名
        :
        : 複数のファイル
        :

    // ない場合は消えます

    Untracked files:
      (use "git add <file>..." to include in what will be committed)

        変更されているファイル名
        :
        : 複数のファイル
        :

    // ない場合は消えます

    nothing added to commit but untracked files present (use "git add" to track)
    ```
    
    add, commitする際に、`$ git status`で確認するとよきですね <br>
    
6. masterブランチへ、プルリクエストを作る

    GitHubに行き、"Pull requests"から"New pull request"を選択します。 <br>
    base: master ← compare: master <br>
    と書いてあるところの"compare"の方を自分のブランチに変更します。<br>
    その後、変更点が出るので"Create pull request"を押して、次のページへ行き、 <br>
    コメントを入力します。ここでは、どの問題を解いたのかということがわかるような題名にしてくれるとありがたいです。<br>
    何か質問等ある時にも、コメントのところに質問を書いてPull Requestを作ってください。 <br>
    最後にまた、"Create pull request"を押すと完了です。

7. LGTM貰ったらマージ

    Pull Requestを作ったら、採点がされます。<br>
    何か問題がある時にはコメントを返します。その場合には自分のブランチで編集をして、 <br>
    もう一度5を行います。するとPull Requestが更新されるので何か通知をしてください。 <br>
    ちゃんと解けている場合には"LGTM"というコメントをするので、LGTMを受け取ったらマージをしてください。 <br>
    手順は、Pull Requestのところから"Merge pull request"を押し、"Confirm merge"を押すと完了です。 <br>
    その後、"Delete branch"を押して、GitHub上のブランチを削除します。

8. 自身のmasterを更新、自分のブランチを削除

    今、自分のブランチにいると思うので、 <br>
    `$ git switch master` <br>
    でmasterブランチへ移動します。その後、<br>
    `$ git pull origin master`<br>
    をして、masterを最新の状態にします。<br>
    
    その後、<br>
    `$ git branch -D [ブランチ名]` <br>
    で、作成したブランチを削除します。

9. 毎日問題が出るので、3〜8を繰り返す

