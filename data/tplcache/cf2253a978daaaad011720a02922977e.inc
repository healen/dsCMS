<li>
                <div class="listcontent">
                    <div class="warplist">
                        <div class="top">
                             <h2>[field:title/]</h2>
                             <p>
                                <span>[field:pubdate function="MyDate('Y年m月d日 h:s发表',@me)" /]</span>
                            </p>
                        </div>
                        <div class="content">
                            <img src="[field:litpic/]" alt="[field:title/]" title="[field:title/]" width="410" height="250" alt="" class="pice" />
                            <div class="article">
                                <div class="con">   
                                 [field:description function='(strlen("@me")>400?cn_substr("@me",400)."…" : "@me" )'/]
                                </div>
                                <div class="link">
                                    <a href="[field:arcurl/]" target="_blank">阅读更多</a>
                                </div>
                            </div>
                            
                        </div>
                       
                    </div>
                    
                </div>
            </li>