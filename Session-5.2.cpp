#include<iostream>
using namespace std;

class SocialMediaUploader{

    public:

    virtual void uploadContent(){

        cout<<"\nUploading Content";
    }
};

class InstagramUploader : public SocialMediaUploader{

    public:

    void uploadContent(){

        cout<<"\nUploading Reel on Instagram";
    }
};

class YouTubeUploader : public SocialMediaUploader{

    public:

    void uploadContent(){

        cout<<"\nUploading Video on YouTube";
    }
};

main(){

    InstagramUploader i1;
    YouTubeUploader y1;

    cout<<"\nInstagram:";
    i1.uploadContent();

    cout<<"\nYouTube:";
    y1.uploadContent();
}
