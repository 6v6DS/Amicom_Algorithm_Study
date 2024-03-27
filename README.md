# Amicom_Algorithm_Study
### Amicom 알고리즘 스터디입니다😃

매 회차 학습내용을 밑에 작성하면서 정리해보세요!

# 마크다운 사용법(문법)
아래에 마크다운 사용법을 간략히 정리해두었으니 `접기/펼치기` 버튼을 클릭해 README 작성시 참고하시면 좋을 것 같습니다.

<details>
<summary>펼치기/접기</summary>
  
# 제목
1,2,3,4,5,6은 제목 크기를 의미합니다.
```
  # 제목 1
  ## 제목 2
  ### 제목 3
  #### 제목 4
  ##### 제목 5
  ###### 제목 6
```
`출력 결과`
 # 제목 1
  ## 제목 2
  ### 제목 3
  #### 제목 4
  ##### 제목 5
  ###### 제목 6
  
# 강조
각각 기울임, 두꺼움, 취소선을 의미합니다.
```
기울임(이텔릭체)는 *별 기호* 혹은 _언더바_ 를 사용하세요.
두껍게는 **별 기호 두개** 혹은 __언더바 두개__를 사용하세요.
취소선은 ~~물결 기호~~ 를 사용하세요.
```
`출력 결과`

기울임(이텔릭체)는 *별 기호* 혹은 _언더바_ 를 사용하세요.

두껍게는 **별 기호 두개** 혹은 __언더바 두개__ 를 사용하세요.

취소선은 ~~물결 기호~~ 를 사용하세요.

# 목록
`1.` 로 시작하는 항목을 작성하면 자동 변환되며, `-` 로 시작하는 항목을 작성하면 순서 없는 항목으로 변환됩니다.
들여쓰기를 통해 하위 목록을 작성할수 있습니다.

```
1. 순서가 있는 항목
  1. 순서가 있는 항목

- 순서가 없는 항목
  -순서가 없는 항목
```

`출력 결과`

1. 순서가 있는 항목

- 순서가 없는 항목

  - 순서가 없는 항목

# 링크

```
[이름](링크)
[이름](링크 "설명)
```

```
[Naver](https://naver.com)
[Google](https://google.com "이 링크는 구글 링크입니다.")
```

`출력 결과`

[Naver](https://naver.com)

[Google](https://google.com "이 링크는 구글 링크입니다.")

# 이미지

링크와 비슷하지만, 앞에 `!` 를 추가해줘야 합니다.

```
![대체텍스트](이미지주소)
![대체텍스트](이미지주소 "설명")
```

# 인라인 코드
강조할 코드를 ` 기호로 감싸 인라인 코드를 표현합니다. 

```
`2024` 아미콤 `화이팅!`
```

`출력 결과`

`2024` 아미콤 `화이팅!`

# 블록

` 를 3번 이상 입력하고 언어(코드)를 명시해, 코드 블록을 표현합니다.

``````
```C
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```
``````



`출력 결과`


```C
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

# 인용문

```
`>` 기호를 이용해 인용문을 작성합니다.
> 인용문

점프

> Amicom
>> 중첩된 인용문을 만들 수 있어요.
>>> 아미콤
>>>> 화이팅

```

`출력 결과`

`>` 기호를 이용해 인용문을 작성합니다.
> 인용문

점프

> Amicom
>> 중첩된 인용문을 만들 수 있어요.
>>> 아미콤
>>>> 화이팅

# 수평선
`---`,`___`,`***` 각 기호를 사용해 수형선을 만들 수 있습니다..

```
---

___

***
```

`출력 결과`

---

___

***

추가적으로 마크다운 문법을 더 상세히 알고싶으시면, 구글링이나 GPT를 이용해주세요😀 

</details>


### 1회차 학습내용

###### github fork, branch, pull, push

1. github fork: fork를 원하는 github의 fork를 눌러 creat fork를 진행한다

   fork를 진행하면 나의 github에 복사된 새로운 레퍼지토리가 생긴다


2. github branch: 새로운 git branch를 생성하려면
```
git branch 브랜치명 //새로운 브랜치를 만든다
git checkout 브랜치명 //git branch를 전환. 현재 작업중인 브랜치를 나타내는 HEAD 포인터가 해당 브랜치로 이동.
git branch //현재 branch의 목록을 확인
git branch -d 브랜치명 //git branch를 삭제
git checkout -b 브랜치명 //브랜치를 새로 생성 후 동시에 이동
git merge 브랜치명 //브랜치 간의 변경사항을 병합
```

4. github pull
```
git clone giturl //github 레퍼지토리 clone
git pull origin 브랜치명 
```

6. github push:
```
git init //로컬 git 레퍼지토리 초기화하여 해당 디렉토리를 로컬 깃으로 등록
git remote add origin giturl //로컬 레퍼지토리와 연결
git add . // .일 경우 모든 파일, 특정 파일 지정도 가능
git commit -m "커밋메세지" 
git push origin 브랜치명 //git에서의 변경사항을 레퍼지토리에 push
```

---
### 2회차 학습내용

---
### 3회차 학습내용

---
### 4회차 학습내용

---
### 5회차 학습내용

---
### 6회차 학습내용

---
### 7회차 학습내용

---
### 8회차 학습내용

---
### 9회차 학습내용

---
### 10회차 학습내용

---
### 11회차 학습내용

---



