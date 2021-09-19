CREATE TABLE [dbo].[iPhone] (
    [id]   INT        NOT NULL,
    [name] NCHAR (10) NULL,
    [charistik] NCHAR(50) NULL, 
    [price] MONEY NULL, 
    CONSTRAINT [PK_iPhone] PRIMARY KEY CLUSTERED ([id] ASC)
);

